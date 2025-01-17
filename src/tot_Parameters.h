! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
!                                                                  
! Parameter Header File                                            
!                                                                  
! Generated by KPP-2.2.4 for Mistra symbolic chemistry Kinetics PreProcessor
!       (http://www.cs.vt.edu/~asandu/Software/Kpp)                
! KPP is distributed under GPL, the general public licence         
!       (http://www.gnu.org/copyleft/gpl.html)                     
! (C) 1995-1997, V. Damian & A. Sandu, CGRER, Univ. Iowa           
! (C) 1997-2005, A. Sandu, Michigan Tech, Virginia Tech            
!     With important contributions from:                           
!        M. Damian, Villanova University, USA                      
!        R. Sander, Max-Planck Institute for Chemistry, Mainz, Germany
!                                                                  
! File                 : tot_Parameters.h                          
! Time                 : Wed Jul 14 18:27:05 2021                  
! Working directory    : /local/josue/Mistra_2019/src/mech         
! Equation file        : tot.k                                     
! Output root filename : tot                                       
!                                                                  
! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




! NSPEC - Number of chemical species                               
      INTEGER NSPEC
      PARAMETER ( NSPEC = 424 )
! NVAR - Number of Variable species                                
      INTEGER NVAR
      PARAMETER ( NVAR = 417 )
! NVARACT - Number of Active species                               
      INTEGER NVARACT
      PARAMETER ( NVARACT = 408 )
! NFIX - Number of Fixed species                                   
      INTEGER NFIX
      PARAMETER ( NFIX = 7 )
! NREACT - Number of reactions                                     
      INTEGER NREACT
      PARAMETER ( NREACT = 1627 )
! NVARST - Starting of variables in conc. vect.                    
      INTEGER NVARST
      PARAMETER ( NVARST = 1 )
! NFIXST - Starting of fixed in conc. vect.                        
      INTEGER NFIXST
      PARAMETER ( NFIXST = 418 )
! LU_NONZERO - Number of nonzero entries in LU factoriz. of Jacobian
      INTEGER LU_NONZERO
      PARAMETER ( LU_NONZERO = 13503 )

! Index declaration for variable species in C and VAR              
!   VAR(ind_spc) = C(ind_spc)                                      

      INTEGER ind_CH2I2
      PARAMETER ( ind_CH2I2 = 1 )
      INTEGER ind_CH2ClI
      PARAMETER ( ind_CH2ClI = 2 )
      INTEGER ind_CH2BrI
      PARAMETER ( ind_CH2BrI = 3 )
      INTEGER ind_DUMM1
      PARAMETER ( ind_DUMM1 = 4 )
      INTEGER ind_DUMM2
      PARAMETER ( ind_DUMM2 = 5 )
      INTEGER ind_ClONO
      PARAMETER ( ind_ClONO = 6 )
      INTEGER ind_ClO3
      PARAMETER ( ind_ClO3 = 7 )
      INTEGER ind_NHS
      PARAMETER ( ind_NHS = 8 )
      INTEGER ind_IO2ml1
      PARAMETER ( ind_IO2ml1 = 9 )
      INTEGER ind_IO2ml2
      PARAMETER ( ind_IO2ml2 = 10 )
      INTEGER ind_IO2ml3
      PARAMETER ( ind_IO2ml3 = 11 )
      INTEGER ind_IO2ml4
      PARAMETER ( ind_IO2ml4 = 12 )
      INTEGER ind_ACTAl1
      PARAMETER ( ind_ACTAl1 = 13 )
      INTEGER ind_DMSO2l1
      PARAMETER ( ind_DMSO2l1 = 14 )
      INTEGER ind_C2H5OHl1
      PARAMETER ( ind_C2H5OHl1 = 15 )
      INTEGER ind_XORl1
      PARAMETER ( ind_XORl1 = 16 )
      INTEGER ind_SORl1
      PARAMETER ( ind_SORl1 = 17 )
      INTEGER ind_ACTAl2
      PARAMETER ( ind_ACTAl2 = 18 )
      INTEGER ind_DMSO2l2
      PARAMETER ( ind_DMSO2l2 = 19 )
      INTEGER ind_C2H5OHl2
      PARAMETER ( ind_C2H5OHl2 = 20 )
      INTEGER ind_XORl2
      PARAMETER ( ind_XORl2 = 21 )
      INTEGER ind_SORl2
      PARAMETER ( ind_SORl2 = 22 )
      INTEGER ind_ACTAl3
      PARAMETER ( ind_ACTAl3 = 23 )
      INTEGER ind_DMSO2l3
      PARAMETER ( ind_DMSO2l3 = 24 )
      INTEGER ind_C2H5OHl3
      PARAMETER ( ind_C2H5OHl3 = 25 )
      INTEGER ind_XORl3
      PARAMETER ( ind_XORl3 = 26 )
      INTEGER ind_SORl3
      PARAMETER ( ind_SORl3 = 27 )
      INTEGER ind_ACTAl4
      PARAMETER ( ind_ACTAl4 = 28 )
      INTEGER ind_DMSO2l4
      PARAMETER ( ind_DMSO2l4 = 29 )
      INTEGER ind_DMSO2
      PARAMETER ( ind_DMSO2 = 30 )
      INTEGER ind_C2H5OHl4
      PARAMETER ( ind_C2H5OHl4 = 31 )
      INTEGER ind_XORl4
      PARAMETER ( ind_XORl4 = 32 )
      INTEGER ind_XOR
      PARAMETER ( ind_XOR = 33 )
      INTEGER ind_SORl4
      PARAMETER ( ind_SORl4 = 34 )
      INTEGER ind_NOl1
      PARAMETER ( ind_NOl1 = 35 )
      INTEGER ind_NOl2
      PARAMETER ( ind_NOl2 = 36 )
      INTEGER ind_NOl3
      PARAMETER ( ind_NOl3 = 37 )
      INTEGER ind_NOl4
      PARAMETER ( ind_NOl4 = 38 )
      INTEGER ind_IOl1
      PARAMETER ( ind_IOl1 = 39 )
      INTEGER ind_IOl2
      PARAMETER ( ind_IOl2 = 40 )
      INTEGER ind_IOl3
      PARAMETER ( ind_IOl3 = 41 )
      INTEGER ind_IOl4
      PARAMETER ( ind_IOl4 = 42 )
      INTEGER ind_Cl2O3
      PARAMETER ( ind_Cl2O3 = 43 )
      INTEGER ind_NH4pl1
      PARAMETER ( ind_NH4pl1 = 44 )
      INTEGER ind_NH3l1
      PARAMETER ( ind_NH3l1 = 45 )
      INTEGER ind_ICl2ml1
      PARAMETER ( ind_ICl2ml1 = 46 )
      INTEGER ind_IBr2ml1
      PARAMETER ( ind_IBr2ml1 = 47 )
      INTEGER ind_NH4pl2
      PARAMETER ( ind_NH4pl2 = 48 )
      INTEGER ind_NH3l2
      PARAMETER ( ind_NH3l2 = 49 )
      INTEGER ind_ICl2ml2
      PARAMETER ( ind_ICl2ml2 = 50 )
      INTEGER ind_IBr2ml2
      PARAMETER ( ind_IBr2ml2 = 51 )
      INTEGER ind_NH4pl3
      PARAMETER ( ind_NH4pl3 = 52 )
      INTEGER ind_NH3l3
      PARAMETER ( ind_NH3l3 = 53 )
      INTEGER ind_ICl2ml3
      PARAMETER ( ind_ICl2ml3 = 54 )
      INTEGER ind_IBr2ml3
      PARAMETER ( ind_IBr2ml3 = 55 )
      INTEGER ind_NH4pl4
      PARAMETER ( ind_NH4pl4 = 56 )
      INTEGER ind_NH3l4
      PARAMETER ( ind_NH3l4 = 57 )
      INTEGER ind_ICl2ml4
      PARAMETER ( ind_ICl2ml4 = 58 )
      INTEGER ind_IBr2ml4
      PARAMETER ( ind_IBr2ml4 = 59 )
      INTEGER ind_CHO2
      PARAMETER ( ind_CHO2 = 60 )
      INTEGER ind_HOSO2
      PARAMETER ( ind_HOSO2 = 61 )
      INTEGER ind_RBr
      PARAMETER ( ind_RBr = 62 )
      INTEGER ind_Br2O
      PARAMETER ( ind_Br2O = 63 )
      INTEGER ind_SPAN
      PARAMETER ( ind_SPAN = 64 )
      INTEGER ind_C2H6
      PARAMETER ( ind_C2H6 = 65 )
      INTEGER ind_NO4ml1
      PARAMETER ( ind_NO4ml1 = 66 )
      INTEGER ind_NO4ml2
      PARAMETER ( ind_NO4ml2 = 67 )
      INTEGER ind_NO4ml3
      PARAMETER ( ind_NO4ml3 = 68 )
      INTEGER ind_NO4ml4
      PARAMETER ( ind_NO4ml4 = 69 )
      INTEGER ind_CH4
      PARAMETER ( ind_CH4 = 70 )
      INTEGER ind_SO2l1
      PARAMETER ( ind_SO2l1 = 71 )
      INTEGER ind_SO4l1
      PARAMETER ( ind_SO4l1 = 72 )
      INTEGER ind_HCll1
      PARAMETER ( ind_HCll1 = 73 )
      INTEGER ind_HBrl1
      PARAMETER ( ind_HBrl1 = 74 )
      INTEGER ind_SO2l2
      PARAMETER ( ind_SO2l2 = 75 )
      INTEGER ind_SO4l2
      PARAMETER ( ind_SO4l2 = 76 )
      INTEGER ind_HCll2
      PARAMETER ( ind_HCll2 = 77 )
      INTEGER ind_HBrl2
      PARAMETER ( ind_HBrl2 = 78 )
      INTEGER ind_SO2l3
      PARAMETER ( ind_SO2l3 = 79 )
      INTEGER ind_SO4l3
      PARAMETER ( ind_SO4l3 = 80 )
      INTEGER ind_HCll3
      PARAMETER ( ind_HCll3 = 81 )
      INTEGER ind_HBrl3
      PARAMETER ( ind_HBrl3 = 82 )
      INTEGER ind_SO2l4
      PARAMETER ( ind_SO2l4 = 83 )
      INTEGER ind_SO4l4
      PARAMETER ( ind_SO4l4 = 84 )
      INTEGER ind_HCll4
      PARAMETER ( ind_HCll4 = 85 )
      INTEGER ind_HBrl4
      PARAMETER ( ind_HBrl4 = 86 )
      INTEGER ind_CH3SO3
      PARAMETER ( ind_CH3SO3 = 87 )
      INTEGER ind_O1D
      PARAMETER ( ind_O1D = 88 )
      INTEGER ind_SO3
      PARAMETER ( ind_SO3 = 89 )
      INTEGER ind_RCl
      PARAMETER ( ind_RCl = 90 )
      INTEGER ind_CH2OHSO3ml1
      PARAMETER ( ind_CH2OHSO3ml1 = 91 )
      INTEGER ind_CH3SO2ml1
      PARAMETER ( ind_CH3SO2ml1 = 92 )
      INTEGER ind_CH2OHSO3ml2
      PARAMETER ( ind_CH2OHSO3ml2 = 93 )
      INTEGER ind_CH3SO2ml2
      PARAMETER ( ind_CH3SO2ml2 = 94 )
      INTEGER ind_SOR
      PARAMETER ( ind_SOR = 95 )
      INTEGER ind_CH2OHSO3ml3
      PARAMETER ( ind_CH2OHSO3ml3 = 96 )
      INTEGER ind_CH3SO2ml3
      PARAMETER ( ind_CH3SO2ml3 = 97 )
      INTEGER ind_CH2OHSO3ml4
      PARAMETER ( ind_CH2OHSO3ml4 = 98 )
      INTEGER ind_CH3SO2ml4
      PARAMETER ( ind_CH3SO2ml4 = 99 )
      INTEGER ind_BrNO2
      PARAMETER ( ind_BrNO2 = 100 )
      INTEGER ind_C2H5I
      PARAMETER ( ind_C2H5I = 101 )
      INTEGER ind_BrCl2ml1
      PARAMETER ( ind_BrCl2ml1 = 102 )
      INTEGER ind_Br2Clml1
      PARAMETER ( ind_Br2Clml1 = 103 )
      INTEGER ind_ClOHml1
      PARAMETER ( ind_ClOHml1 = 104 )
      INTEGER ind_IClBrml1
      PARAMETER ( ind_IClBrml1 = 105 )
      INTEGER ind_HIO3
      PARAMETER ( ind_HIO3 = 106 )
      INTEGER ind_BrCl2ml2
      PARAMETER ( ind_BrCl2ml2 = 107 )
      INTEGER ind_Br2Clml2
      PARAMETER ( ind_Br2Clml2 = 108 )
      INTEGER ind_ClOHml2
      PARAMETER ( ind_ClOHml2 = 109 )
      INTEGER ind_IClBrml2
      PARAMETER ( ind_IClBrml2 = 110 )
      INTEGER ind_BrCl2ml3
      PARAMETER ( ind_BrCl2ml3 = 111 )
      INTEGER ind_Br2Clml3
      PARAMETER ( ind_Br2Clml3 = 112 )
      INTEGER ind_ClOHml3
      PARAMETER ( ind_ClOHml3 = 113 )
      INTEGER ind_IClBrml3
      PARAMETER ( ind_IClBrml3 = 114 )
      INTEGER ind_C3H7I
      PARAMETER ( ind_C3H7I = 115 )
      INTEGER ind_BrCl2ml4
      PARAMETER ( ind_BrCl2ml4 = 116 )
      INTEGER ind_Br2Clml4
      PARAMETER ( ind_Br2Clml4 = 117 )
      INTEGER ind_ClOHml4
      PARAMETER ( ind_ClOHml4 = 118 )
      INTEGER ind_IClBrml4
      PARAMETER ( ind_IClBrml4 = 119 )
      INTEGER ind_CH3I
      PARAMETER ( ind_CH3I = 120 )
      INTEGER ind_SO3ml1
      PARAMETER ( ind_SO3ml1 = 121 )
      INTEGER ind_CO2l2
      PARAMETER ( ind_CO2l2 = 122 )
      INTEGER ind_SO3ml2
      PARAMETER ( ind_SO3ml2 = 123 )
      INTEGER ind_CO2l1
      PARAMETER ( ind_CO2l1 = 124 )
      INTEGER ind_CO2l3
      PARAMETER ( ind_CO2l3 = 125 )
      INTEGER ind_SO3ml3
      PARAMETER ( ind_SO3ml3 = 126 )
      INTEGER ind_I2O2
      PARAMETER ( ind_I2O2 = 127 )
      INTEGER ind_CO2l4
      PARAMETER ( ind_CO2l4 = 128 )
      INTEGER ind_SO3ml4
      PARAMETER ( ind_SO3ml4 = 129 )
      INTEGER ind_ACTA
      PARAMETER ( ind_ACTA = 130 )
      INTEGER ind_O2l2
      PARAMETER ( ind_O2l2 = 131 )
      INTEGER ind_O2l1
      PARAMETER ( ind_O2l1 = 132 )
      INTEGER ind_O2l3
      PARAMETER ( ind_O2l3 = 133 )
      INTEGER ind_O2l4
      PARAMETER ( ind_O2l4 = 134 )
      INTEGER ind_INO2
      PARAMETER ( ind_INO2 = 135 )
      INTEGER ind_DMSOl2
      PARAMETER ( ind_DMSOl2 = 136 )
      INTEGER ind_CH3OHl2
      PARAMETER ( ind_CH3OHl2 = 137 )
      INTEGER ind_CH3OHl1
      PARAMETER ( ind_CH3OHl1 = 138 )
      INTEGER ind_H2
      PARAMETER ( ind_H2 = 139 )
      INTEGER ind_DMSOl3
      PARAMETER ( ind_DMSOl3 = 140 )
      INTEGER ind_CH3OHl3
      PARAMETER ( ind_CH3OHl3 = 141 )
      INTEGER ind_DMSOl4
      PARAMETER ( ind_DMSOl4 = 142 )
      INTEGER ind_CH3OHl4
      PARAMETER ( ind_CH3OHl4 = 143 )
      INTEGER ind_Cl2O2
      PARAMETER ( ind_Cl2O2 = 144 )
      INTEGER ind_DMSOl1
      PARAMETER ( ind_DMSOl1 = 145 )
      INTEGER ind_ClOml2
      PARAMETER ( ind_ClOml2 = 146 )
      INTEGER ind_BrOml2
      PARAMETER ( ind_BrOml2 = 147 )
      INTEGER ind_ClOml3
      PARAMETER ( ind_ClOml3 = 148 )
      INTEGER ind_BrOml3
      PARAMETER ( ind_BrOml3 = 149 )
      INTEGER ind_ClOml1
      PARAMETER ( ind_ClOml1 = 150 )
      INTEGER ind_ClOml4
      PARAMETER ( ind_ClOml4 = 151 )
      INTEGER ind_BrOml4
      PARAMETER ( ind_BrOml4 = 152 )
      INTEGER ind_BrOml1
      PARAMETER ( ind_BrOml1 = 153 )
      INTEGER ind_PAN
      PARAMETER ( ind_PAN = 154 )
      INTEGER ind_HNO3l1
      PARAMETER ( ind_HNO3l1 = 155 )
      INTEGER ind_C2H5OH
      PARAMETER ( ind_C2H5OH = 156 )
      INTEGER ind_CO3ml1
      PARAMETER ( ind_CO3ml1 = 157 )
      INTEGER ind_CO3ml2
      PARAMETER ( ind_CO3ml2 = 158 )
      INTEGER ind_BrOHml2
      PARAMETER ( ind_BrOHml2 = 159 )
      INTEGER ind_HNO3l3
      PARAMETER ( ind_HNO3l3 = 160 )
      INTEGER ind_HNO3l2
      PARAMETER ( ind_HNO3l2 = 161 )
      INTEGER ind_BrOHml1
      PARAMETER ( ind_BrOHml1 = 162 )
      INTEGER ind_CO3ml3
      PARAMETER ( ind_CO3ml3 = 163 )
      INTEGER ind_BrOHml3
      PARAMETER ( ind_BrOHml3 = 164 )
      INTEGER ind_HNO3l4
      PARAMETER ( ind_HNO3l4 = 165 )
      INTEGER ind_CO3ml4
      PARAMETER ( ind_CO3ml4 = 166 )
      INTEGER ind_BrOHml4
      PARAMETER ( ind_BrOHml4 = 167 )
      INTEGER ind_IRO2
      PARAMETER ( ind_IRO2 = 168 )
      INTEGER ind_ClNO2
      PARAMETER ( ind_ClNO2 = 169 )
      INTEGER ind_CH3S
      PARAMETER ( ind_CH3S = 170 )
      INTEGER ind_HCOOHl2
      PARAMETER ( ind_HCOOHl2 = 171 )
      INTEGER ind_HCOOHl3
      PARAMETER ( ind_HCOOHl3 = 172 )
      INTEGER ind_HCOOHl1
      PARAMETER ( ind_HCOOHl1 = 173 )
      INTEGER ind_HCOOHl4
      PARAMETER ( ind_HCOOHl4 = 174 )
      INTEGER ind_CO
      PARAMETER ( ind_CO = 175 )
      INTEGER ind_DOMl2
      PARAMETER ( ind_DOMl2 = 176 )
      INTEGER ind_CH3SO3ml2
      PARAMETER ( ind_CH3SO3ml2 = 177 )
      INTEGER ind_DOMl3
      PARAMETER ( ind_DOMl3 = 178 )
      INTEGER ind_CH3SO3ml3
      PARAMETER ( ind_CH3SO3ml3 = 179 )
      INTEGER ind_CH3SO3ml1
      PARAMETER ( ind_CH3SO3ml1 = 180 )
      INTEGER ind_DOMl4
      PARAMETER ( ind_DOMl4 = 181 )
      INTEGER ind_DOMl1
      PARAMETER ( ind_DOMl1 = 182 )
      INTEGER ind_CH3SO3ml4
      PARAMETER ( ind_CH3SO3ml4 = 183 )
      INTEGER ind_HONO
      PARAMETER ( ind_HONO = 184 )
      INTEGER ind_ClRO2
      PARAMETER ( ind_ClRO2 = 185 )
      INTEGER ind_HSO4ml2
      PARAMETER ( ind_HSO4ml2 = 186 )
      INTEGER ind_HSO4ml3
      PARAMETER ( ind_HSO4ml3 = 187 )
      INTEGER ind_HSO4ml1
      PARAMETER ( ind_HSO4ml1 = 188 )
      INTEGER ind_HSO4ml4
      PARAMETER ( ind_HSO4ml4 = 189 )
      INTEGER ind_HI
      PARAMETER ( ind_HI = 190 )
      INTEGER ind_NH3
      PARAMETER ( ind_NH3 = 191 )
      INTEGER ind_BrRO2
      PARAMETER ( ind_BrRO2 = 192 )
      INTEGER ind_IO3ml2
      PARAMETER ( ind_IO3ml2 = 193 )
      INTEGER ind_IO3ml1
      PARAMETER ( ind_IO3ml1 = 194 )
      INTEGER ind_IO3ml3
      PARAMETER ( ind_IO3ml3 = 195 )
      INTEGER ind_IO3ml4
      PARAMETER ( ind_IO3ml4 = 196 )
      INTEGER ind_HOI
      PARAMETER ( ind_HOI = 197 )
      INTEGER ind_CH3SO
      PARAMETER ( ind_CH3SO = 198 )
      INTEGER ind_HNO4
      PARAMETER ( ind_HNO4 = 199 )
      INTEGER ind_CH3OOl1
      PARAMETER ( ind_CH3OOl1 = 200 )
      INTEGER ind_CH3OOl3
      PARAMETER ( ind_CH3OOl3 = 201 )
      INTEGER ind_CH3OOl4
      PARAMETER ( ind_CH3OOl4 = 202 )
      INTEGER ind_ETO2
      PARAMETER ( ind_ETO2 = 203 )
      INTEGER ind_CH3OOl2
      PARAMETER ( ind_CH3OOl2 = 204 )
      INTEGER ind_HSO5ml2
      PARAMETER ( ind_HSO5ml2 = 205 )
      INTEGER ind_HCOOml1
      PARAMETER ( ind_HCOOml1 = 206 )
      INTEGER ind_HCO3ml1
      PARAMETER ( ind_HCO3ml1 = 207 )
      INTEGER ind_HCOOml3
      PARAMETER ( ind_HCOOml3 = 208 )
      INTEGER ind_HCO3ml3
      PARAMETER ( ind_HCO3ml3 = 209 )
      INTEGER ind_HSO5ml3
      PARAMETER ( ind_HSO5ml3 = 210 )
      INTEGER ind_HCOOml2
      PARAMETER ( ind_HCOOml2 = 211 )
      INTEGER ind_HCO3ml2
      PARAMETER ( ind_HCO3ml2 = 212 )
      INTEGER ind_HCOOml4
      PARAMETER ( ind_HCOOml4 = 213 )
      INTEGER ind_HCO3ml4
      PARAMETER ( ind_HCO3ml4 = 214 )
      INTEGER ind_HSO5ml4
      PARAMETER ( ind_HSO5ml4 = 215 )
      INTEGER ind_HSO5ml1
      PARAMETER ( ind_HSO5ml1 = 216 )
      INTEGER ind_ICll2
      PARAMETER ( ind_ICll2 = 217 )
      INTEGER ind_ICll3
      PARAMETER ( ind_ICll3 = 218 )
      INTEGER ind_ICll4
      PARAMETER ( ind_ICll4 = 219 )
      INTEGER ind_ICll1
      PARAMETER ( ind_ICll1 = 220 )
      INTEGER ind_INO3
      PARAMETER ( ind_INO3 = 221 )
      INTEGER ind_CH3SO2
      PARAMETER ( ind_CH3SO2 = 222 )
      INTEGER ind_EO2
      PARAMETER ( ind_EO2 = 223 )
      INTEGER ind_IBrl3
      PARAMETER ( ind_IBrl3 = 224 )
      INTEGER ind_IBrl2
      PARAMETER ( ind_IBrl2 = 225 )
      INTEGER ind_IBrl4
      PARAMETER ( ind_IBrl4 = 226 )
      INTEGER ind_IBrl1
      PARAMETER ( ind_IBrl1 = 227 )
      INTEGER ind_DMOO
      PARAMETER ( ind_DMOO = 228 )
      INTEGER ind_ETHE
      PARAMETER ( ind_ETHE = 229 )
      INTEGER ind_NO2ml3
      PARAMETER ( ind_NO2ml3 = 230 )
      INTEGER ind_NO2ml4
      PARAMETER ( ind_NO2ml4 = 231 )
      INTEGER ind_NO2ml1
      PARAMETER ( ind_NO2ml1 = 232 )
      INTEGER ind_NO2ml2
      PARAMETER ( ind_NO2ml2 = 233 )
      INTEGER ind_BrCll3
      PARAMETER ( ind_BrCll3 = 234 )
      INTEGER ind_HIO2l3
      PARAMETER ( ind_HIO2l3 = 235 )
      INTEGER ind_BrCll1
      PARAMETER ( ind_BrCll1 = 236 )
      INTEGER ind_HIO2l1
      PARAMETER ( ind_HIO2l1 = 237 )
      INTEGER ind_BrCll4
      PARAMETER ( ind_BrCll4 = 238 )
      INTEGER ind_HIO2l4
      PARAMETER ( ind_HIO2l4 = 239 )
      INTEGER ind_BrCll2
      PARAMETER ( ind_BrCll2 = 240 )
      INTEGER ind_HIO2l2
      PARAMETER ( ind_HIO2l2 = 241 )
      INTEGER ind_ALD2
      PARAMETER ( ind_ALD2 = 242 )
      INTEGER ind_DMSl3
      PARAMETER ( ind_DMSl3 = 243 )
      INTEGER ind_DMSl4
      PARAMETER ( ind_DMSl4 = 244 )
      INTEGER ind_DMSl1
      PARAMETER ( ind_DMSl1 = 245 )
      INTEGER ind_DMSl2
      PARAMETER ( ind_DMSl2 = 246 )
      INTEGER ind_MCO3
      PARAMETER ( ind_MCO3 = 247 )
      INTEGER ind_OClO
      PARAMETER ( ind_OClO = 248 )
      INTEGER ind_Cl2
      PARAMETER ( ind_Cl2 = 249 )
      INTEGER ind_H2O2
      PARAMETER ( ind_H2O2 = 250 )
      INTEGER ind_NO3l2
      PARAMETER ( ind_NO3l2 = 251 )
      INTEGER ind_NO3l4
      PARAMETER ( ind_NO3l4 = 252 )
      INTEGER ind_NO3l3
      PARAMETER ( ind_NO3l3 = 253 )
      INTEGER ind_NO3l1
      PARAMETER ( ind_NO3l1 = 254 )
      INTEGER ind_NO2l4
      PARAMETER ( ind_NO2l4 = 255 )
      INTEGER ind_HCHOl4
      PARAMETER ( ind_HCHOl4 = 256 )
      INTEGER ind_NO2l1
      PARAMETER ( ind_NO2l1 = 257 )
      INTEGER ind_HCHOl3
      PARAMETER ( ind_HCHOl3 = 258 )
      INTEGER ind_HCHOl1
      PARAMETER ( ind_HCHOl1 = 259 )
      INTEGER ind_NO2l3
      PARAMETER ( ind_NO2l3 = 260 )
      INTEGER ind_HCHOl2
      PARAMETER ( ind_HCHOl2 = 261 )
      INTEGER ind_NO2l2
      PARAMETER ( ind_NO2l2 = 262 )
      INTEGER ind_HOBr
      PARAMETER ( ind_HOBr = 263 )
      INTEGER ind_ROOH
      PARAMETER ( ind_ROOH = 264 )
      INTEGER ind_Br2l2
      PARAMETER ( ind_Br2l2 = 265 )
      INTEGER ind_Br2l1
      PARAMETER ( ind_Br2l1 = 266 )
      INTEGER ind_Br2l3
      PARAMETER ( ind_Br2l3 = 267 )
      INTEGER ind_Br2l4
      PARAMETER ( ind_Br2l4 = 268 )
      INTEGER ind_Brl3
      PARAMETER ( ind_Brl3 = 269 )
      INTEGER ind_Brl1
      PARAMETER ( ind_Brl1 = 270 )
      INTEGER ind_Brl4
      PARAMETER ( ind_Brl4 = 271 )
      INTEGER ind_Brl2
      PARAMETER ( ind_Brl2 = 272 )
      INTEGER ind_Iml1
      PARAMETER ( ind_Iml1 = 273 )
      INTEGER ind_Iml3
      PARAMETER ( ind_Iml3 = 274 )
      INTEGER ind_Iml2
      PARAMETER ( ind_Iml2 = 275 )
      INTEGER ind_Iml4
      PARAMETER ( ind_Iml4 = 276 )
      INTEGER ind_HOCl
      PARAMETER ( ind_HOCl = 277 )
      INTEGER ind_OIO
      PARAMETER ( ind_OIO = 278 )
      INTEGER ind_SO4ml3
      PARAMETER ( ind_SO4ml3 = 279 )
      INTEGER ind_SO4ml2
      PARAMETER ( ind_SO4ml2 = 280 )
      INTEGER ind_SO4ml4
      PARAMETER ( ind_SO4ml4 = 281 )
      INTEGER ind_SO4ml1
      PARAMETER ( ind_SO4ml1 = 282 )
      INTEGER ind_N2O5
      PARAMETER ( ind_N2O5 = 283 )
      INTEGER ind_I2l2
      PARAMETER ( ind_I2l2 = 284 )
      INTEGER ind_I2l1
      PARAMETER ( ind_I2l1 = 285 )
      INTEGER ind_I2l3
      PARAMETER ( ind_I2l3 = 286 )
      INTEGER ind_I2l4
      PARAMETER ( ind_I2l4 = 287 )
      INTEGER ind_HCl
      PARAMETER ( ind_HCl = 288 )
      INTEGER ind_HBr
      PARAMETER ( ind_HBr = 289 )
      INTEGER ind_SO2
      PARAMETER ( ind_SO2 = 290 )
      INTEGER ind_HONOl1
      PARAMETER ( ind_HONOl1 = 291 )
      INTEGER ind_Cll2
      PARAMETER ( ind_Cll2 = 292 )
      INTEGER ind_Cll3
      PARAMETER ( ind_Cll3 = 293 )
      INTEGER ind_Cll4
      PARAMETER ( ind_Cll4 = 294 )
      INTEGER ind_Cll1
      PARAMETER ( ind_Cll1 = 295 )
      INTEGER ind_SO5ml3
      PARAMETER ( ind_SO5ml3 = 296 )
      INTEGER ind_SO5ml2
      PARAMETER ( ind_SO5ml2 = 297 )
      INTEGER ind_SO5ml4
      PARAMETER ( ind_SO5ml4 = 298 )
      INTEGER ind_HOIl2
      PARAMETER ( ind_HOIl2 = 299 )
      INTEGER ind_HNO4l2
      PARAMETER ( ind_HNO4l2 = 300 )
      INTEGER ind_SO5ml1
      PARAMETER ( ind_SO5ml1 = 301 )
      INTEGER ind_SO42ml3
      PARAMETER ( ind_SO42ml3 = 302 )
      INTEGER ind_SO42ml4
      PARAMETER ( ind_SO42ml4 = 303 )
      INTEGER ind_SO42ml1
      PARAMETER ( ind_SO42ml1 = 304 )
      INTEGER ind_SO42ml2
      PARAMETER ( ind_SO42ml2 = 305 )
      INTEGER ind_BrNO3
      PARAMETER ( ind_BrNO3 = 306 )
      INTEGER ind_ClNO3
      PARAMETER ( ind_ClNO3 = 307 )
      INTEGER ind_CH3OOHl1
      PARAMETER ( ind_CH3OOHl1 = 308 )
      INTEGER ind_NO3ml4
      PARAMETER ( ind_NO3ml4 = 309 )
      INTEGER ind_NO3ml3
      PARAMETER ( ind_NO3ml3 = 310 )
      INTEGER ind_O3l4
      PARAMETER ( ind_O3l4 = 311 )
      INTEGER ind_O3l3
      PARAMETER ( ind_O3l3 = 312 )
      INTEGER ind_HO2l4
      PARAMETER ( ind_HO2l4 = 313 )
      INTEGER ind_HO2l3
      PARAMETER ( ind_HO2l3 = 314 )
      INTEGER ind_O2ml2
      PARAMETER ( ind_O2ml2 = 315 )
      INTEGER ind_NO3ml1
      PARAMETER ( ind_NO3ml1 = 316 )
      INTEGER ind_IO
      PARAMETER ( ind_IO = 317 )
      INTEGER ind_HO2l2
      PARAMETER ( ind_HO2l2 = 318 )
      INTEGER ind_NO3ml2
      PARAMETER ( ind_NO3ml2 = 319 )
      INTEGER ind_OHml3
      PARAMETER ( ind_OHml3 = 320 )
      INTEGER ind_O2ml4
      PARAMETER ( ind_O2ml4 = 321 )
      INTEGER ind_Cl2ml4
      PARAMETER ( ind_Cl2ml4 = 322 )
      INTEGER ind_Br2ml4
      PARAMETER ( ind_Br2ml4 = 323 )
      INTEGER ind_SO32ml4
      PARAMETER ( ind_SO32ml4 = 324 )
      INTEGER ind_OHl4
      PARAMETER ( ind_OHl4 = 325 )
      INTEGER ind_Br2ml2
      PARAMETER ( ind_Br2ml2 = 326 )
      INTEGER ind_Cl2ml2
      PARAMETER ( ind_Cl2ml2 = 327 )
      INTEGER ind_OHl2
      PARAMETER ( ind_OHl2 = 328 )
      INTEGER ind_HOBrl4
      PARAMETER ( ind_HOBrl4 = 329 )
      INTEGER ind_SO32ml2
      PARAMETER ( ind_SO32ml2 = 330 )
      INTEGER ind_O3l2
      PARAMETER ( ind_O3l2 = 331 )
      INTEGER ind_HOCll1
      PARAMETER ( ind_HOCll1 = 332 )
      INTEGER ind_Cl2l1
      PARAMETER ( ind_Cl2l1 = 333 )
      INTEGER ind_Cl2ml3
      PARAMETER ( ind_Cl2ml3 = 334 )
      INTEGER ind_O2ml3
      PARAMETER ( ind_O2ml3 = 335 )
      INTEGER ind_Br2ml3
      PARAMETER ( ind_Br2ml3 = 336 )
      INTEGER ind_SO32ml3
      PARAMETER ( ind_SO32ml3 = 337 )
      INTEGER ind_OHl3
      PARAMETER ( ind_OHl3 = 338 )
      INTEGER ind_HSO3ml3
      PARAMETER ( ind_HSO3ml3 = 339 )
      INTEGER ind_H2O2l4
      PARAMETER ( ind_H2O2l4 = 340 )
      INTEGER ind_SO32ml1
      PARAMETER ( ind_SO32ml1 = 341 )
      INTEGER ind_HO2l1
      PARAMETER ( ind_HO2l1 = 342 )
      INTEGER ind_O2ml1
      PARAMETER ( ind_O2ml1 = 343 )
      INTEGER ind_Cl2ml1
      PARAMETER ( ind_Cl2ml1 = 344 )
      INTEGER ind_Br2ml1
      PARAMETER ( ind_Br2ml1 = 345 )
      INTEGER ind_OHl1
      PARAMETER ( ind_OHl1 = 346 )
      INTEGER ind_O3l1
      PARAMETER ( ind_O3l1 = 347 )
      INTEGER ind_Hpl3
      PARAMETER ( ind_Hpl3 = 348 )
      INTEGER ind_BrO
      PARAMETER ( ind_BrO = 349 )
      INTEGER ind_HOIl3
      PARAMETER ( ind_HOIl3 = 350 )
      INTEGER ind_HNO4l3
      PARAMETER ( ind_HNO4l3 = 351 )
      INTEGER ind_Hpl2
      PARAMETER ( ind_Hpl2 = 352 )
      INTEGER ind_HSO3ml2
      PARAMETER ( ind_HSO3ml2 = 353 )
      INTEGER ind_OHml2
      PARAMETER ( ind_OHml2 = 354 )
      INTEGER ind_HNO4l1
      PARAMETER ( ind_HNO4l1 = 355 )
      INTEGER ind_CO2
      PARAMETER ( ind_CO2 = 356 )
      INTEGER ind_Brml1
      PARAMETER ( ind_Brml1 = 357 )
      INTEGER ind_H2O2l3
      PARAMETER ( ind_H2O2l3 = 358 )
      INTEGER ind_Clml1
      PARAMETER ( ind_Clml1 = 359 )
      INTEGER ind_HONOl3
      PARAMETER ( ind_HONOl3 = 360 )
      INTEGER ind_Clml4
      PARAMETER ( ind_Clml4 = 361 )
      INTEGER ind_HNO4l4
      PARAMETER ( ind_HNO4l4 = 362 )
      INTEGER ind_HOCll2
      PARAMETER ( ind_HOCll2 = 363 )
      INTEGER ind_Brml4
      PARAMETER ( ind_Brml4 = 364 )
      INTEGER ind_Brml2
      PARAMETER ( ind_Brml2 = 365 )
      INTEGER ind_CH3OOHl4
      PARAMETER ( ind_CH3OOHl4 = 366 )
      INTEGER ind_Hpl1
      PARAMETER ( ind_Hpl1 = 367 )
      INTEGER ind_OHml1
      PARAMETER ( ind_OHml1 = 368 )
      INTEGER ind_HSO3ml4
      PARAMETER ( ind_HSO3ml4 = 369 )
      INTEGER ind_BrCl
      PARAMETER ( ind_BrCl = 370 )
      INTEGER ind_DMS
      PARAMETER ( ind_DMS = 371 )
      INTEGER ind_H2O2l1
      PARAMETER ( ind_H2O2l1 = 372 )
      INTEGER ind_CH3SO2H
      PARAMETER ( ind_CH3SO2H = 373 )
      INTEGER ind_HOIl1
      PARAMETER ( ind_HOIl1 = 374 )
      INTEGER ind_HCHO
      PARAMETER ( ind_HCHO = 375 )
      INTEGER ind_NO
      PARAMETER ( ind_NO = 376 )
      INTEGER ind_Hpl4
      PARAMETER ( ind_Hpl4 = 377 )
      INTEGER ind_Brml3
      PARAMETER ( ind_Brml3 = 378 )
      INTEGER ind_CH3OOHl2
      PARAMETER ( ind_CH3OOHl2 = 379 )
      INTEGER ind_Cl2l4
      PARAMETER ( ind_Cl2l4 = 380 )
      INTEGER ind_Cl2l3
      PARAMETER ( ind_Cl2l3 = 381 )
      INTEGER ind_DMSO
      PARAMETER ( ind_DMSO = 382 )
      INTEGER ind_HONOl2
      PARAMETER ( ind_HONOl2 = 383 )
      INTEGER ind_HSO3ml1
      PARAMETER ( ind_HSO3ml1 = 384 )
      INTEGER ind_OHml4
      PARAMETER ( ind_OHml4 = 385 )
      INTEGER ind_I2
      PARAMETER ( ind_I2 = 386 )
      INTEGER ind_ICl
      PARAMETER ( ind_ICl = 387 )
      INTEGER ind_HOBrl1
      PARAMETER ( ind_HOBrl1 = 388 )
      INTEGER ind_OH
      PARAMETER ( ind_OH = 389 )
      INTEGER ind_HO2
      PARAMETER ( ind_HO2 = 390 )
      INTEGER ind_H2O2l2
      PARAMETER ( ind_H2O2l2 = 391 )
      INTEGER ind_MO2
      PARAMETER ( ind_MO2 = 392 )
      INTEGER ind_Clml2
      PARAMETER ( ind_Clml2 = 393 )
      INTEGER ind_HOIl4
      PARAMETER ( ind_HOIl4 = 394 )
      INTEGER ind_IBr
      PARAMETER ( ind_IBr = 395 )
      INTEGER ind_ACO2
      PARAMETER ( ind_ACO2 = 396 )
      INTEGER ind_O3P
      PARAMETER ( ind_O3P = 397 )
      INTEGER ind_Cl
      PARAMETER ( ind_Cl = 398 )
      INTEGER ind_ClO
      PARAMETER ( ind_ClO = 399 )
      INTEGER ind_HOCll3
      PARAMETER ( ind_HOCll3 = 400 )
      INTEGER ind_Br
      PARAMETER ( ind_Br = 401 )
      INTEGER ind_HOBrl2
      PARAMETER ( ind_HOBrl2 = 402 )
      INTEGER ind_I
      PARAMETER ( ind_I = 403 )
      INTEGER ind_NO3
      PARAMETER ( ind_NO3 = 404 )
      INTEGER ind_CH3SO3H
      PARAMETER ( ind_CH3SO3H = 405 )
      INTEGER ind_HOCll4
      PARAMETER ( ind_HOCll4 = 406 )
      INTEGER ind_Cl2l2
      PARAMETER ( ind_Cl2l2 = 407 )
      INTEGER ind_CH3OH
      PARAMETER ( ind_CH3OH = 408 )
      INTEGER ind_NO2
      PARAMETER ( ind_NO2 = 409 )
      INTEGER ind_HNO3
      PARAMETER ( ind_HNO3 = 410 )
      INTEGER ind_CH3OOHl3
      PARAMETER ( ind_CH3OOHl3 = 411 )
      INTEGER ind_Br2
      PARAMETER ( ind_Br2 = 412 )
      INTEGER ind_Clml3
      PARAMETER ( ind_Clml3 = 413 )
      INTEGER ind_HONOl4
      PARAMETER ( ind_HONOl4 = 414 )
      INTEGER ind_H2SO4
      PARAMETER ( ind_H2SO4 = 415 )
      INTEGER ind_O3
      PARAMETER ( ind_O3 = 416 )
      INTEGER ind_HOBrl3
      PARAMETER ( ind_HOBrl3 = 417 )

! Index declaration for fixed species in C                         
!   C(ind_spc)                                                     

      INTEGER ind_O2
      PARAMETER ( ind_O2 = 418 )
      INTEGER ind_H2O
      PARAMETER ( ind_H2O = 419 )
      INTEGER ind_N2
      PARAMETER ( ind_N2 = 420 )
      INTEGER ind_H2Ol1
      PARAMETER ( ind_H2Ol1 = 421 )
      INTEGER ind_H2Ol2
      PARAMETER ( ind_H2Ol2 = 422 )
      INTEGER ind_H2Ol3
      PARAMETER ( ind_H2Ol3 = 423 )
      INTEGER ind_H2Ol4
      PARAMETER ( ind_H2Ol4 = 424 )

! Index declaration for fixed species in FIX                       
!    FIX(indf_spc) = C(ind_spc) = C(NVAR+indf_spc)                 

      INTEGER indf_O2
      PARAMETER ( indf_O2 = 1 )
      INTEGER indf_H2O
      PARAMETER ( indf_H2O = 2 )
      INTEGER indf_N2
      PARAMETER ( indf_N2 = 3 )
      INTEGER indf_H2Ol1
      PARAMETER ( indf_H2Ol1 = 4 )
      INTEGER indf_H2Ol2
      PARAMETER ( indf_H2Ol2 = 5 )
      INTEGER indf_H2Ol3
      PARAMETER ( indf_H2Ol3 = 6 )
      INTEGER indf_H2Ol4
      PARAMETER ( indf_H2Ol4 = 7 )
