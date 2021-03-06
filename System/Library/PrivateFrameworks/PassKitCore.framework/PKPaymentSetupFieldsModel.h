/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;
	PKPaymentSetupFieldFooter* _footerField;

}
+(id)fakePaymentSetupProvisioningFields;
+(id)defaultPaymentSetupProvisioningFields;
-(id)init;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)resetAllPaymentSetupFieldValues;
-(void)prefillDefaultValues;
-(id)incompletePaymentSetupFields;
-(id)footerPaymentSetupField;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)paymentSetupFields;
-(id)paymentSetupFieldIdentifiers;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(BOOL)hasFooterPaymentSetupField;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
@end

