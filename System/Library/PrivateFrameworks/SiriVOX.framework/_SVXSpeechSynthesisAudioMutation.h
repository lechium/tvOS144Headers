/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXSpeechSynthesisAudioMutating.h>

@class SVXSpeechSynthesisAudio, NSData, SVXAudioStreamBasicDescription, NSString;

@interface _SVXSpeechSynthesisAudioMutation : NSObject <SVXSpeechSynthesisAudioMutating> {

	SVXSpeechSynthesisAudio* _baseModel;
	NSData* _data;
	SVXAudioStreamBasicDescription* _decoderASBD;
	SVXAudioStreamBasicDescription* _playerASBD;
	struct {
		unsigned isDirty : 1;
		unsigned hasData : 1;
		unsigned hasDecoderASBD : 1;
		unsigned hasPlayerASBD : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setData:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setDecoderASBD:(id)arg1 ;
-(void)setPlayerASBD:(id)arg1 ;
@end

