/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject {

	PLPhotoLibraryBundle* _bundle;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLPhotoLibraryBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)priority;
-(PLPhotoLibraryBundle *)bundle;
-(id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2 ;
@end

