/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamInsights/SQQuery.h>

@interface SQPoolQuery : SQQuery
+(id)poolsFromServerData:(id)arg1 error:(id*)arg2 ;
-(void)fetchPoolsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cachePoolForRegion:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchClustersWithPoolID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deletePool:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
