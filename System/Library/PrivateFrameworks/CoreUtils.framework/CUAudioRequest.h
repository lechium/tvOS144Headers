/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioPlayer, NSString;

@interface CUAudioRequest : NSObject {

	AVAudioPlayer* _audioPlayer;
	/*^block*/id _completion;
	NSString* _label;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;              //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
-(id)completion;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
@end

