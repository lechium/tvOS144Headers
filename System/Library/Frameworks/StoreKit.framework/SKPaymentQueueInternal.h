/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, SKPaymentQueueDelegate;
@class NSString, SKPaymentQueueClient, NSMutableDictionary, NSMutableArray, NSObject, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	BOOL _isRedemptionSheetShowing;
	BOOL _isRefreshing;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSString* _identifier;
	SKPaymentQueueClient* _client;
	NSMutableDictionary* _downloads;
	NSMutableArray* _localTransactions;
	NSMutableArray* _transactions;
	NSMutableArray* _weakObservers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	id<SKPaymentQueueDelegate> _delegate;

}
-(id)init;
-(void)dealloc;
@end

