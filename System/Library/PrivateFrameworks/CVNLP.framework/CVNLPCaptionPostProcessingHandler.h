/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCharacterSet, CVNLPCaptionRuntimeParameters;

@interface CVNLPCaptionPostProcessingHandler : NSObject {

	NSCharacterSet* _trimSet;
	CVNLPCaptionRuntimeParameters* _runtimeParameters;

}

@property (readonly) NSCharacterSet * trimSet;                                              //@synthesize trimSet=_trimSet - In the implementation block
@property (__weak,readonly) CVNLPCaptionRuntimeParameters * runtimeParameters;              //@synthesize runtimeParameters=_runtimeParameters - In the implementation block
-(id)initWithOptions:(id)arg1 runtimeParameters:(id)arg2 ;
-(id)postProcessCaptions:(id)arg1 visionObservations:(id)arg2 ;
-(NSCharacterSet *)trimSet;
-(CVNLPCaptionRuntimeParameters *)runtimeParameters;
@end

