/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/_MPKeyPathEntityRelationshipTranslator.h>

@class NSString;

@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator {

	NSString* _mediaKitType;
	/*^block*/id _payloadTransformBlock;

}

@property (nonatomic,copy) NSString * mediaKitType;                   //@synthesize mediaKitType=_mediaKitType - In the implementation block
@property (nonatomic,readonly) id payloadTransformBlock;              //@synthesize payloadTransformBlock=_payloadTransformBlock - In the implementation block
-(id)prepareSource:(id)arg1 context:(id)arg2 ;
-(id)initWithRelatedMPModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransformBlock:(/*^block*/id)arg3 ;
-(NSString *)mediaKitType;
-(void)setMediaKitType:(NSString *)arg1 ;
-(id)payloadTransformBlock;
@end

