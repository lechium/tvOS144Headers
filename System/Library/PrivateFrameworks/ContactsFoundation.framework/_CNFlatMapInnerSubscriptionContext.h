/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNCancelable;
@class CNSuspendableSchedulerDecorator;

@interface _CNFlatMapInnerSubscriptionContext : NSObject {

	CNSuspendableSchedulerDecorator* _decorator;
	id<CNCancelable> _token;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * decorator;              //@synthesize decorator=_decorator - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> token;                                   //@synthesize token=_token - In the implementation block
-(id<CNCancelable>)token;
-(id)initWithDecorator:(id)arg1 token:(id)arg2 ;
-(CNSuspendableSchedulerDecorator *)decorator;
@end
