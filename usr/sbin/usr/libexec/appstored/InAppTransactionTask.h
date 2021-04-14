//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "AMSPurchaseResponseProtocol-Protocol.h"

@class AMSBuyParams, AMSPurchaseQueue, NSData, NSDictionary, NSNumber, NSString, NSURL, StoreKitClient;

@interface InAppTransactionTask : AsyncTask <AMSPurchaseResponseProtocol>
{
    AMSBuyParams *_buyParams;	// 8 = 0x8
    AMSPurchaseQueue *_purchaseQueue;	// 16 = 0x10
    _Bool _excludeReceiptFromRequest;	// 24 = 0x18
    _Bool _forceAuthentication;	// 25 = 0x19
    _Bool _hideConfirmation;	// 26 = 0x1a
    _Bool _privacyAcknowledgementRequired;	// 27 = 0x1b
    _Bool _storeOriginated;	// 28 = 0x1c
    _Bool _simulateAskToBuy;	// 29 = 0x1d
    StoreKitClient *_client;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
    NSString *_productIdentifier;	// 48 = 0x30
    unsigned long long _quantity;	// 56 = 0x38
    NSDictionary *_additionalBuyParams;	// 64 = 0x40
    NSString *_applicationUsername;	// 72 = 0x48
    NSString *_discountIdentifier;	// 80 = 0x50
    NSString *_discountKeyIdentifier;	// 88 = 0x58
    NSString *_discountNonceString;	// 96 = 0x60
    NSString *_discountSignature;	// 104 = 0x68
    NSNumber *_discountTimestamp;	// 112 = 0x70
    NSString *_partnerIdentifier;	// 120 = 0x78
    NSString *_partnerTransactionIdentifier;	// 128 = 0x80
    NSData *_requestData;	// 136 = 0x88
    NSURL *_receiptInstallURL;	// 144 = 0x90
    NSDictionary *_transaction;	// 152 = 0x98
    NSDictionary *_response;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000001002cac28
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) NSDictionary *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSURL *receiptInstallURL; // @synthesize receiptInstallURL=_receiptInstallURL;
@property(nonatomic) _Bool simulateAskToBuy; // @synthesize simulateAskToBuy=_simulateAskToBuy;
@property(nonatomic, getter=isStoreOriginated) _Bool storeOriginated; // @synthesize storeOriginated=_storeOriginated;
@property(nonatomic) _Bool privacyAcknowledgementRequired; // @synthesize privacyAcknowledgementRequired=_privacyAcknowledgementRequired;
@property(nonatomic) _Bool hideConfirmation; // @synthesize hideConfirmation=_hideConfirmation;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(nonatomic) _Bool excludeReceiptFromRequest; // @synthesize excludeReceiptFromRequest=_excludeReceiptFromRequest;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSString *partnerTransactionIdentifier; // @synthesize partnerTransactionIdentifier=_partnerTransactionIdentifier;
@property(retain, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
@property(retain, nonatomic) NSNumber *discountTimestamp; // @synthesize discountTimestamp=_discountTimestamp;
@property(retain, nonatomic) NSString *discountSignature; // @synthesize discountSignature=_discountSignature;
@property(retain, nonatomic) NSString *discountNonceString; // @synthesize discountNonceString=_discountNonceString;
@property(retain, nonatomic) NSString *discountKeyIdentifier; // @synthesize discountKeyIdentifier=_discountKeyIdentifier;
@property(retain, nonatomic) NSString *discountIdentifier; // @synthesize discountIdentifier=_discountIdentifier;
@property(retain, nonatomic) NSString *applicationUsername; // @synthesize applicationUsername=_applicationUsername;
@property(retain, nonatomic) NSDictionary *additionalBuyParams; // @synthesize additionalBuyParams=_additionalBuyParams;
@property(readonly, nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, copy, nonatomic) StoreKitClient *client; // @synthesize client=_client;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ca670
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ca404
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ca198
- (id)_processPurchaseResult:(id)arg1;	// IMP=0x00000001002ca0c8
- (id)_authenticateWithClientInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002c9c20
- (id)_buyParams;	// IMP=0x00000001002c91f4
- (void)main;	// IMP=0x00000001002c860c
- (id)initWithProductIdentifier:(id)arg1 quantity:(unsigned long long)arg2 client:(id)arg3;	// IMP=0x00000001002c8478
- (id)initWithBuyParams:(id)arg1 client:(id)arg2;	// IMP=0x00000001002c8370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
