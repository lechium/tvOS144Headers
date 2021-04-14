/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class NSArray;

@interface EspressoDataFrameExecutor : NSObject {

	vector<void *, std::__1::allocator<void *> >* pointers_to_free;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* pixelbuffers_to_release;
	int _use_cvpixelbuffer;
	NSArray* _outputMatchingBuffers;

}

@property (retain) NSArray * outputMatchingBuffers;              //@synthesize outputMatchingBuffers=_outputMatchingBuffers - In the implementation block
@property (assign,nonatomic) int use_cvpixelbuffer;              //@synthesize use_cvpixelbuffer=_use_cvpixelbuffer - In the implementation block
-(void)dealloc;
-(BOOL)useCVPixelBuffersForOutputs:(BOOL)arg1 ;
-(BOOL)useCVPixelBuffers;
-(int)bindInput:(id)arg1 fromImageAttachment:(id)arg2 toNetwork:(SCD_Struct_Es3*)arg3 ;
-(int)bindInput:(id)arg1 fromTensorAttachment:(id)arg2 toNetwork:(SCD_Struct_Es3*)arg3 ;
-(int)bindInputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es3*)arg2 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es3*)arg2 referenceNetwork:(SCD_Struct_Es3*)arg3 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es3*)arg2 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es3*)arg2 executionStatus:(int)arg3 ;
-(void)freeTemporaryResources;
-(NSArray *)outputMatchingBuffers;
-(void)setOutputMatchingBuffers:(NSArray *)arg1 ;
-(int)use_cvpixelbuffer;
-(void)setUse_cvpixelbuffer:(int)arg1 ;
@end

