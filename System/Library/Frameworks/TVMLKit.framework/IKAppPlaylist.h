/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class IKAppPlaylistBridge;


@protocol IKAppPlaylist
@property (readonly) unsigned long long count; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@property (nonatomic,readonly) IKAppPlaylistBridge * bridge; 
@optional
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1;
-(id)objectsAtIndexes:(id)arg1;
-(void)removeObjectsAtIndexes:(id)arg1;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1;
-(IKAppPlaylistBridge *)bridge;
-(void)setEndAction:(long long)arg1;
-(long long)endAction;

@end

