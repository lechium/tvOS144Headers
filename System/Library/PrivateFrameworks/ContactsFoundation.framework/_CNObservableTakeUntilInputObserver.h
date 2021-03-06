/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNObservableTakeUntilInputObserverDelegate;
@class NSString;

@interface _CNObservableTakeUntilInputObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNObservableTakeUntilInputObserverDelegate> _delegate;

}

@property (readonly) id<CNObserver> observer;                                                      //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<_CNObservableTakeUntilInputObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_CNObservableTakeUntilInputObserverDelegate>)delegate;
-(id<CNObserver>)observer;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
@end

