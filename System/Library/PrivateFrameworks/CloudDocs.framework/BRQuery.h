/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/BRNotificationReceiverDelegate.h>

@class NSMutableArray, NSMutableDictionary, BRNotificationReceiver, NSMetadataQuery, NSPredicate, NSString, NSArray, NSOperationQueue;

@interface BRQuery : NSObject <BRNotificationReceiverDelegate> {

	NSMutableArray* _results;
	NSMutableDictionary* _resultsByRowID;
	BRNotificationReceiver* _receiver;
	NSMetadataQuery* _query;
	NSPredicate* _predicate;
	NSString* _bundleIdentifier;
	NSMutableDictionary* _toBeRemovedByFileObjectID;
	NSMutableDictionary* _toBeReplacedByFileObjectID;
	NSMutableDictionary* _toBeInsertedByFileObjectID;
	int _queryState;
	BOOL _ubiquitousGatherComplete;
	BOOL _needsCrashMarking;
	BOOL _needsCrashEvicting;
	BOOL _sendHasUpdateNotification;
	NSArray* _values;
	NSArray* _sortingAttributes;
	SCD_Struct_BR6 _batchingParameters;
	/*function pointer*/void* _create_result_fn;
	void* _create_result_context;
	/*function pointer*/void* _create_result_callbacks_equal;
	/*function pointer*/void* _create_result_callbacks_release;
	/*function pointer*/void* _create_value_fn;
	void* _create_value_context;
	/*function pointer*/void* _create_value_callbacks_equal;
	/*function pointer*/void* _create_value_callbacks_release;
	NSArray* _searchScopes;
	unsigned _scopeOptions;
	/*function pointer*/void* _sort_fn;
	void* _sort_context;
	CFRunLoopRef _runLoop;
	NSOperationQueue* _queryQueue;
	Ai _disableCount;
	int _receiverDisableCount;

}

@property (__weak) NSMetadataQuery * query;                         //@synthesize query=_query - In the implementation block
@property (retain) BRNotificationReceiver * receiver;               //@synthesize receiver=_receiver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)didEndPossibleFileOperation:(id)arg1 ;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSMetadataQuery *)query;
-(void)stop;
-(unsigned long long)resultCount;
-(void)disableUpdates;
-(void)enableUpdates;
-(const void*)resultAtIndex:(long long)arg1 ;
-(long long)indexOfResult:(const void*)arg1 ;
-(void)setQueryQueue:(id)arg1 ;
-(void)setBatchingParameters:(SCD_Struct_BR6)arg1 ;
-(id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4 ;
-(void)setCreateResultFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_BR8*)arg3 ;
-(void)setCreateValueFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_BR8*)arg3 ;
-(void)setSortComparator:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)setSearchScope:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(unsigned char)executeWithOptions:(unsigned long long)arg1 ;
-(void)setSendHasUpdateNotification:(BOOL)arg1 ;
-(void)processUpdates;
-(id)valuesOfAttribute:(id)arg1 ;
-(unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2 ;
-(id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2 ;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(void)setReceiver:(BRNotificationReceiver *)arg1 ;
-(id)queryQueue;
-(BRNotificationReceiver *)receiver;
-(void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1 ;
-(void)notificationsReceiverDidFinishGathering:(id)arg1 ;
-(void)notificationsReceiverDidInvalidate:(id)arg1 ;
-(void)notificationReceiverDidReceiveNotifications:(id)arg1 ;
-(void)_performBlockAsync:(/*^block*/id)arg1 ;
-(void)_setQueryState:(int)arg1 ;
-(void)_watchScopes;
-(void)_runQuery;
-(id)_replacementObjectForQueryItem:(id)arg1 ;
-(void)_postNote:(const CFStringRef)arg1 ;
-(id)_replacementObjectsForArrayOfQueryItem:(id)arg1 ;
-(void)_postNote:(const CFStringRef)arg1 userInfo:(id)arg2 ;
-(BOOL)_collectUpdates:(id)arg1 ;
-(void)_processUpdates;
-(void)_sendHasUpdateNotificationIfNeeded;
-(void)_processChanges:(id)arg1 ;
@end

