/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSPredicate, EKEventStore, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {

	/*^block*/id _callback;
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	id _cancellationToken;
	BOOL _finished;
	BOOL _isCancelled;
	int _retryCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signpostHandle;
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(void)cancel;
-(void)terminate;
-(void)disconnect;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(id)_createOSActivity;
-(void)signpostStart;
-(void)_startActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_fetchObjectIDsActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startProcessingWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 processor:(/*^block*/id)arg3 ;
-(void)signpostEndWithError:(int)arg1 count:(unsigned long long)arg2 ;
-(void)_startActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startFetchObjectIDsActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(id)runSynchronously;
-(id)fetchObjectIDs;
@end
