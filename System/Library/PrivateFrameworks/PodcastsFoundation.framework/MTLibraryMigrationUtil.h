/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MTLibraryMigrationUtil : NSObject
+(BOOL)isNewInstall;
+(BOOL)createPersistentStoreForModel:(id)arg1 attemptMigration:(BOOL)arg2 ;
+(BOOL)needsCoreDataMigration;
+(BOOL)needsDataMigration;
+(BOOL)needsImageStoreMigration;
+(BOOL)isMomCompatible:(id)arg1 ;
@end

