/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSString, NSArray;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (nonatomic,copy) NSString * locateMode; 
@property (assign,nonatomic) BOOL stopAtFirstPyramidWith2DCode; 
@property (nonatomic,copy) NSArray * symbologies; 
+(void)initialize;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)barcodeSymbologyForACBSBarcodeType:(id)arg1 ;
+(id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1 ;
+(id)_allBarcodeSymbologies;
+(id)supportedSymbologies;
+(id)availableLocateModes;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1 ;
-(int)_ACBarcodeRecognizerLocateMode;
-(ACBSConfigRef)_createACBSConfigAndReturnError:(id*)arg1 ;
-(BOOL)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(CGPoint*)arg2 topLeft:(CGPoint*)arg3 topRight:(CGPoint*)arg4 bottomRight:(CGPoint*)arg5 ;
-(id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(CGRect)arg4 requestRevision:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(ACBSConfigRef)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSArray *)symbologies;
-(void)setSymbologies:(NSArray *)arg1 ;
-(NSString *)locateMode;
-(void)setLocateMode:(NSString *)arg1 ;
-(BOOL)stopAtFirstPyramidWith2DCode;
-(void)setStopAtFirstPyramidWith2DCode:(BOOL)arg1 ;
@end

