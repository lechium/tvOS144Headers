/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPServerObjectDatabaseOperations <NSObject>
@required
-(BOOL)importObject:(id)arg1 type:(id)arg2 identifiers:(id)arg3 source:(long long)arg4 expiration:(id)arg5;
-(BOOL)importAssetURL:(id)arg1 forIdentifiers:(id)arg2 flavor:(long long)arg3;
-(BOOL)importAssetMiniSINF:(id)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(long long)arg4;
-(BOOL)relateIdentifiers:(id)arg1 toParentIdentifiers:(id)arg2 childKey:(id)arg3 order:(long long)arg4;
-(BOOL)removeRelationshipsForParentIdentifiers:(id)arg1 childKey:(id)arg2;

@end

