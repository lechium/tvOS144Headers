/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class VCPVideoProcessor;

@interface VNVideoProcessor : NSObject {

	VCPVideoProcessor* _videoProcessor;

}
-(id)initWithURL:(id)arg1 ;
-(void)cancel;
-(BOOL)addRequest:(id)arg1 processingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)addRequest:(id)arg1 withProcessingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)analyzeWithTimeRange:(SCD_Struct_VN38)arg1 error:(id*)arg2 ;
-(BOOL)analyzeTimeRange:(SCD_Struct_VN38)arg1 error:(id*)arg2 ;
@end

