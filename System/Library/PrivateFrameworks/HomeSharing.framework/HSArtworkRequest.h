/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isConcurrent;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)acceptsGzipEncoding;
@end

