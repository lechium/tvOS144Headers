/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentHistoryToken, NSArray, NSManagedObjectContext;

@interface PHPersistentChangeFetchResult : NSObject {

	NSPersistentHistoryToken* _initialToken;
	NSArray* _transactions;
	NSManagedObjectContext* _context;
	unsigned long long _maximumChangeThreshold;
	unsigned long long _changeCount;

}

@property (nonatomic,readonly) unsigned long long changeCount;              //@synthesize changeCount=_changeCount - In the implementation block
+(id)fetchResultWithToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)changeCount;
-(id)initWithInitialToken:(id)arg1 transactions:(id)arg2 maximumChangeThreshold:(unsigned long long)arg3 managedObjectObjectContext:(id)arg4 ;
-(void)enumerateChangesWithBlock:(/*^block*/id)arg1 ;
@end

