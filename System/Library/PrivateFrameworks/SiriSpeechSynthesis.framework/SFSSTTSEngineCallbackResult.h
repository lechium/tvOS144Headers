/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSError;

@interface SFSSTTSEngineCallbackResult : NSObject {

	vector<unsigned char, std::__1::allocator<unsigned char> > _pcmDataBuffer;
	vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >* _marker;
	NSError* _error;
	/*^block*/id _beginCallback;
	/*^block*/id _chunkCallback;
	/*^block*/id _endCallback;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,copy) id beginCallback;                                //@synthesize beginCallback=_beginCallback - In the implementation block
@property (nonatomic,copy) id chunkCallback;                                //@synthesize chunkCallback=_chunkCallback - In the implementation block
@property (nonatomic,copy) id endCallback;                                  //@synthesize endCallback=_endCallback - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(id)pcmData;
-(id)initWithBeginCallback:(/*^block*/id)arg1 chunkCallback:(/*^block*/id)arg2 endCallback:(/*^block*/id)arg3 ;
-(int)synthesisCallback:(int)arg1 ;
-(vector<unsigned char, std::__1::allocator<unsigned char> >*)pcmDataBuffer;
-(vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >*)marker;
-(id)beginCallback;
-(void)setBeginCallback:(id)arg1 ;
-(id)chunkCallback;
-(void)setChunkCallback:(id)arg1 ;
-(id)endCallback;
-(void)setEndCallback:(id)arg1 ;
@end

