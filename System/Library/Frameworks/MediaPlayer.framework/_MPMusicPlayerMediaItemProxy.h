/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@class MPMediaItem, NSString;

@interface _MPMusicPlayerMediaItemProxy : NSProxy {

	MPMediaItem* _item;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) MPMediaItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSString *)itemIdentifier;
-(MPMediaItem *)item;
-(id)initWithItemIdentifier:(id)arg1 item:(id)arg2 ;
@end

