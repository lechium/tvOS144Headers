/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPMediaItem, NSString;

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding> {

	MPMediaItem* _item;
	NSString* _itemIdentifier;
	NSString* _artworkIdentifier;
	long long _index;
	long long _count;

}

@property (nonatomic,readonly) MPMediaItem * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,readonly) long long index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nowPlayingWithItem:(id)arg1 itemIdentifier:(id)arg2 artworkIdentifier:(id)arg3 index:(long long)arg4 count:(long long)arg5 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)index;
-(NSString *)itemIdentifier;
-(MPMediaItem *)item;
-(NSString *)artworkIdentifier;
@end

