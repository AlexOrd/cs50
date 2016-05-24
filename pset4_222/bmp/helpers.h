   // Determine the new dimensions
    bi_r.biWidth  = bi.biWidth * factor;
    bi_r.biHeight = bi.biHeight * factor;
    
    // Determine the old and new paddings
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) %4) % 4;
    int res_padding = (4 - (bi_r.biWidth * sizeof(RGBTRIPLE)) %4) % 4;
    
    // Determine new image sizes
    bi_r.biSizeImage = (bi_r.biWidth * sizeof(RGBTRIPLE) + res_padding) * abs(bi_r.biHeight);
    bf_r.bfSize = bf.bfSize - bi.biSizeImage + bi_r.biSizeImage;
	
	
	
	
	
	
	
	
	// iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        // Read each scanline factor times
        for (int j = 0; j < factor; j++)
        {  
            // iterate over pixels in scanline
            for (int k = 0; k < bi.biWidth; k++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                // write RGB triple to outfile, multiplied by factor
                for (int l = 0; l < factor; l++)
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);    
            }
            
            // Add a new padding
            for (int l = 0; l < res_padding; l++)
                fputc(0x00, outptr);
            
            // Return to the beginning of a scanline
            if (j < factor - 1)
                fseek(inptr, -bi.biWidth * sizeof(RGBTRIPLE), SEEK_CUR);