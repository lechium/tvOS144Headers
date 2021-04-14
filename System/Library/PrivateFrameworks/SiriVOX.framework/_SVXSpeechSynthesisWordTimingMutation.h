/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXSpeechSynthesisWordTimingMutating.h>

@class SVXSpeechSynthesisWordTiming, NSString;

@interface _SVXSpeechSynthesisWordTimingMutation : NSObject <SVXSpeechSynthesisWordTimingMutating> {

	SVXSpeechSynthesisWordTiming* _baseModel;
	NSRange _range;
	double _timeInterval;
	struct {
		unsigned isDirty : 1;
		unsigned hasRange : 1;
		unsigned hasTimeInterval : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setRange:(NSRange)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
@end

