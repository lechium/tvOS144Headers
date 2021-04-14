/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/DeliveryAccount.h>

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {

	DAMailAccount* _DAMailAccount;

}
-(void)dealloc;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(Class)deliveryClass;
-(id)mailAccountIfAvailable;
-(id)initWithDAMailAccount:(id)arg1 ;
@end

