/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject {

	NSMutableDictionary* _keyToTTSEngineMap;

}

@property (nonatomic,retain) NSMutableDictionary * keyToTTSEngineMap;              //@synthesize keyToTTSEngineMap=_keyToTTSEngineMap - In the implementation block
+(id)sharedInstance;
+(id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(id)init;
-(id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(NSMutableDictionary *)keyToTTSEngineMap;
-(void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(void)removeAllEngines;
-(void)setKeyToTTSEngineMap:(NSMutableDictionary *)arg1 ;
@end

