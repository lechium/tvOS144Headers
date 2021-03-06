/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionEncoder.h>

@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder {

	void* encoderPlan;
	void* encoderCtx;
	SCD_Struct_CV1* encoderNet;
	SCD_Struct_CV2* attFeatsBlob;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForPixelBuffer:(CVBufferRef)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForImageImpl:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForPixelBufferImpl:(CVBufferRef)arg1 outputs:(id*)arg2 ;
@end

