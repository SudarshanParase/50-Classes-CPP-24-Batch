#include "Apple_Header_File.hpp"

int main(void)
{
    Apple_Overview Overview("Apple Mac Studio (M2 Ultra, 2023)"
                        , "₹5,00,000 - ₹7,00,000+ (Varies based on RAM & SSD config)"
                        , "June 2023"
                        , "Creative professionals, developers, AI researchers, editors"
                        , "Mini Workstation Desktop", "CNC-machined aluminum enclosure"
                        , "Silver"); 

            Overview.show();

    Apple_CPU CPU("Apple M2 Ultra (5nm)"
                , "24-core CPU (16 performance + 8 efficiency)"
                , "Unified architecture (not traditional threads)"
                , "~3.7 GHz (Performance cores)"
                , "192MB L2 (shared), up to 96MB system-level cache"
                , "~90W (Highly power-efficient compared to x86)");

        CPU.show();

    Apple_GPU GPU("Integrated in Apple Silicon"
                , "60-core or 76-core GPU"
                , "Shared with unified memory"
                , "Comparable to RTX 4080 (60-core) / near RTX 4090 (76-core)"
                , "Metal-accelerated rendering, FCP, DaVinci Resolve, etc.");

        GPU.show();

    Apple_Ram Ram("Unified LPDDR5 RAM (High-bandwidth)"
                , "64 GB / 128 GB / 192 GB"
                , "800 GB/s", 'N');

        Ram.show();

    Apple_Storage Storage("NVMe SSD (Apple proprietary)"
                        , "1 TB / 2 TB / 4 TB / 8 TB"
                        , "~7.4 GB/s", "~6.9 GB/s"
                        , 'N');

        Storage.show(); 

    return (0);
}

// 326 Line Code