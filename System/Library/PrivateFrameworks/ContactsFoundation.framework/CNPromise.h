/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNPromise <NSObject>
@required
-(BOOL)finishWithError:(id)arg1;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;

@end
