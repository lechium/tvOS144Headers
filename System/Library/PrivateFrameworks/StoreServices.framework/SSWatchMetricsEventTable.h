/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSEventsTableBase.h>

@interface SSWatchMetricsEventTable : SSEventsTableBase
+(id)databasePath;
-(BOOL)_setupDatabase;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(BOOL)_migrateToVersion4;
-(BOOL)_migrateToVersion5;
-(BOOL)_migrateToVersion6;
-(BOOL)_migrateToVersion7;
@end
