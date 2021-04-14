/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet, PKContact, NSData, NSURL, PKApplePayTrustSignatureRequest, NSDate, NSTimeZone, AKAppleIDAuthenticationContext, PKPaymentMerchantSession, PKPaymentInstallmentConfiguration;

@interface PKPaymentRequest : NSObject <NSSecureCoding> {

	BOOL _expectsMerchantSession;
	BOOL _accountPaymentSupportsPeerPayment;
	BOOL _accountPaymentUsePeerPaymentBalance;
	BOOL _deviceSupportsPeerPaymentAccountPayment;
	BOOL _suppressTotal;
	BOOL _paymentSummaryPinned;
	BOOL _shippingEditable;
	BOOL _requiresAddressPrecision;
	BOOL _supportsInstantFundsIn;
	NSString* _merchantIdentifier;
	NSString* _countryCode;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;
	NSArray* _paymentSummaryItems;
	NSString* _currencyCode;
	NSSet* _requiredBillingContactFields;
	PKContact* _billingContact;
	NSSet* _requiredShippingContactFields;
	PKContact* _shippingContact;
	NSArray* _shippingMethods;
	unsigned long long _shippingType;
	NSData* _applicationData;
	NSSet* _supportedCountries;
	NSArray* _thumbnailURLs;
	NSURL* _originatingURL;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _CTDataConnectionServiceType;
	NSString* _boundInterfaceIdentifier;
	PKApplePayTrustSignatureRequest* _applePayTrustSignatureRequest;
	NSArray* _bankAccounts;
	long long _paymentFrequency;
	NSDate* _paymentDate;
	NSTimeZone* _paymentTimeZone;
	unsigned long long _APIType;
	unsigned long long _requestType;
	unsigned long long _requestor;
	NSArray* _paymentContentItems;
	NSString* _localizedSummaryItemsTitle;
	NSData* _externalizedContext;
	SecAccessControlRef _accesssControlRef;
	AKAppleIDAuthenticationContext* _appleIDAuthenticationContext;
	NSString* _localizedNavigationTitle;
	unsigned long long _confirmationStyle;
	NSString* _localizedConfirmationTitle;
	NSString* _localizedBiometricConfirmationTitle;
	NSString* _localizedPasswordButtonTitle;
	NSString* _localizedAuthorizingTitle;
	NSString* _localizedErrorMessage;
	NSString* _localizedCallbackErrorTitle;
	NSString* _localizedCallbackErrorMessage;
	NSString* _shippingEditableMessage;
	PKPaymentMerchantSession* _merchantSession;
	NSString* _passTypeIdentifier;
	NSString* _passSerialNumber;
	double _clientCallbackTimeout;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) NSArray * thumbnailURLs;                                                      //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (nonatomic,retain) NSURL * originatingURL;                                                       //@synthesize originatingURL=_originatingURL - In the implementation block
@property (assign,nonatomic) BOOL expectsMerchantSession;                                                  //@synthesize expectsMerchantSession=_expectsMerchantSession - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;                              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * CTDataConnectionServiceType;                                       //@synthesize CTDataConnectionServiceType=_CTDataConnectionServiceType - In the implementation block
@property (nonatomic,copy) NSString * boundInterfaceIdentifier;                                            //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (nonatomic,retain) PKApplePayTrustSignatureRequest * applePayTrustSignatureRequest;              //@synthesize applePayTrustSignatureRequest=_applePayTrustSignatureRequest - In the implementation block
@property (nonatomic,retain) NSArray * bankAccounts;                                                       //@synthesize bankAccounts=_bankAccounts - In the implementation block
@property (assign,nonatomic) BOOL accountPaymentSupportsPeerPayment;                                       //@synthesize accountPaymentSupportsPeerPayment=_accountPaymentSupportsPeerPayment - In the implementation block
@property (assign,nonatomic) BOOL accountPaymentUsePeerPaymentBalance;                                     //@synthesize accountPaymentUsePeerPaymentBalance=_accountPaymentUsePeerPaymentBalance - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;                                 //@synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                                                   //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
@property (nonatomic,copy) NSDate * paymentDate;                                                           //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * paymentTimeZone;                                                   //@synthesize paymentTimeZone=_paymentTimeZone - In the implementation block
@property (readonly) BOOL _isPSD2StyleRequest; 
@property (readonly) BOOL _isAMPPayment; 
@property (readonly) BOOL shouldUseMerchantSession; 
@property (assign,nonatomic) unsigned long long APIType;                                                   //@synthesize APIType=_APIType - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                               //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long requestor;                                                 //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSArray * paymentContentItems;                                                  //@synthesize paymentContentItems=_paymentContentItems - In the implementation block
@property (assign,nonatomic) BOOL suppressTotal;                                                           //@synthesize suppressTotal=_suppressTotal - In the implementation block
@property (assign,getter=isPaymentSummaryPinned,nonatomic) BOOL paymentSummaryPinned;                      //@synthesize paymentSummaryPinned=_paymentSummaryPinned - In the implementation block
@property (nonatomic,copy) NSString * localizedSummaryItemsTitle;                                          //@synthesize localizedSummaryItemsTitle=_localizedSummaryItemsTitle - In the implementation block
@property (nonatomic,copy) NSData * externalizedContext;                                                   //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,nonatomic) SecAccessControlRef accesssControlRef;                                        //@synthesize accesssControlRef=_accesssControlRef - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * appleIDAuthenticationContext;                //@synthesize appleIDAuthenticationContext=_appleIDAuthenticationContext - In the implementation block
@property (nonatomic,copy) NSString * localizedNavigationTitle;                                            //@synthesize localizedNavigationTitle=_localizedNavigationTitle - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationStyle;                                         //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,copy) NSString * localizedConfirmationTitle;                                          //@synthesize localizedConfirmationTitle=_localizedConfirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedBiometricConfirmationTitle;                                 //@synthesize localizedBiometricConfirmationTitle=_localizedBiometricConfirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedPasswordButtonTitle;                                        //@synthesize localizedPasswordButtonTitle=_localizedPasswordButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedAuthorizingTitle;                                           //@synthesize localizedAuthorizingTitle=_localizedAuthorizingTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedErrorMessage;                                               //@synthesize localizedErrorMessage=_localizedErrorMessage - In the implementation block
@property (nonatomic,copy) NSString * localizedCallbackErrorTitle;                                         //@synthesize localizedCallbackErrorTitle=_localizedCallbackErrorTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedCallbackErrorMessage;                                       //@synthesize localizedCallbackErrorMessage=_localizedCallbackErrorMessage - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;                              //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,copy) NSString * shippingEditableMessage;                                             //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (assign,nonatomic) BOOL requiresAddressPrecision;                                                //@synthesize requiresAddressPrecision=_requiresAddressPrecision - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;                                   //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                                                  //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * passSerialNumber;                                                    //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (assign,nonatomic) double clientCallbackTimeout;                                                 //@synthesize clientCallbackTimeout=_clientCallbackTimeout - In the implementation block
@property (assign,nonatomic) BOOL supportsInstantFundsIn;                                                  //@synthesize supportsInstantFundsIn=_supportsInstantFundsIn - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;                 //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                                                  //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                         //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                                                    //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;                                      //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,copy) NSArray * paymentSummaryItems;                                                  //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                                        //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSSet * requiredBillingContactFields;                                         //@synthesize requiredBillingContactFields=_requiredBillingContactFields - In the implementation block
@property (assign,nonatomic) unsigned long long requiredBillingAddressFields; 
@property (nonatomic,retain) PKContact * billingContact;                                                   //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) NSSet * requiredShippingContactFields;                                        //@synthesize requiredShippingContactFields=_requiredShippingContactFields - In the implementation block
@property (assign,nonatomic) unsigned long long requiredShippingAddressFields; 
@property (nonatomic,retain) PKContact * shippingContact;                                                  //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,copy) NSArray * shippingMethods;                                                      //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (assign,nonatomic) unsigned long long shippingType;                                              //@synthesize shippingType=_shippingType - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                                       //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,copy) NSSet * supportedCountries;                                                     //@synthesize supportedCountries=_supportedCountries - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)availableNetworks;
+(id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2 ;
+(id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2 ;
+(id)requestWithProtobuf:(id)arg1 ;
+(id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2 ;
+(id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(NSString *)boundInterfaceIdentifier;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSData *)externalizedContext;
-(unsigned long long)requestType;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(unsigned long long)requestor;
-(void)setRequestor:(unsigned long long)arg1 ;
-(id)_transactionAmount;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(NSSet *)supportedCountries;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(NSData *)applicationData;
-(id)protobuf;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(PKContact *)shippingContact;
-(NSString *)passTypeIdentifier;
-(NSURL *)originatingURL;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(BOOL)deviceSupportsPeerPaymentAccountPayment;
-(void)setClientCallbackTimeout:(double)arg1 ;
-(void)setConfirmationStyle:(unsigned long long)arg1 ;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(void)setApplePayTrustSignatureRequest:(PKApplePayTrustSignatureRequest *)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(void)setAccountPaymentSupportsPeerPayment:(BOOL)arg1 ;
-(void)setAccountPaymentUsePeerPaymentBalance:(BOOL)arg1 ;
-(void)setBankAccounts:(NSArray *)arg1 ;
-(NSArray *)bankAccounts;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(PKContact *)billingContact;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(BOOL)isPeerPaymentRequest;
-(BOOL)supportsInstantFundsIn;
-(void)setDeviceSupportsPeerPaymentAccountPayment:(BOOL)arg1 ;
-(NSSet *)requiredShippingContactFields;
-(NSSet *)requiredBillingContactFields;
-(NSArray *)paymentSummaryItems;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
-(id)peerPaymentRequest;
-(BOOL)_isAMPPayment;
-(NSArray *)paymentContentItems;
-(void)setPaymentContentItems:(NSArray *)arg1 ;
-(NSArray *)shippingMethods;
-(unsigned long long)shippingType;
-(void)setShippingType:(unsigned long long)arg1 ;
-(BOOL)isShippingEditable;
-(void)setShippingEditable:(BOOL)arg1 ;
-(NSString *)shippingEditableMessage;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(BOOL)accountPaymentSupportsPeerPayment;
-(BOOL)accountPaymentUsePeerPaymentBalance;
-(NSString *)CTDataConnectionServiceType;
-(NSArray *)thumbnailURLs;
-(BOOL)shouldUseMerchantSession;
-(unsigned long long)APIType;
-(BOOL)isDisbursementPaymentRequest;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(double)clientCallbackTimeout;
-(BOOL)requiresAddressPrecision;
-(BOOL)isServiceProviderPaymentRequest;
-(id)serviceProviderPaymentRequest;
-(id)disbursementPaymentRequest;
-(PKApplePayTrustSignatureRequest *)applePayTrustSignatureRequest;
-(void)setSuppressTotal:(BOOL)arg1 ;
-(void)setLocalizedNavigationTitle:(NSString *)arg1 ;
-(void)setLocalizedErrorMessage:(NSString *)arg1 ;
-(void)setLocalizedAuthorizingTitle:(NSString *)arg1 ;
-(void)setLocalizedCallbackErrorTitle:(NSString *)arg1 ;
-(void)setLocalizedCallbackErrorMessage:(NSString *)arg1 ;
-(void)setAPIType:(unsigned long long)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(unsigned long long)requiredBillingAddressFields;
-(void)setRequiredBillingAddressFields:(unsigned long long)arg1 ;
-(unsigned long long)requiredShippingAddressFields;
-(void)setRequiredShippingAddressFields:(unsigned long long)arg1 ;
-(void)setRequiredShippingContactFields:(NSSet *)arg1 ;
-(void)setRequiredBillingContactFields:(NSSet *)arg1 ;
-(void)setSupportedCountries:(NSSet *)arg1 ;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setSupportsInstantFundsIn:(BOOL)arg1 ;
-(NSString *)passSerialNumber;
-(BOOL)_isPSD2StyleRequest;
-(AKAppleIDAuthenticationContext *)appleIDAuthenticationContext;
-(BOOL)expectsMerchantSession;
-(BOOL)isEqualToPaymentRequest:(id)arg1 ;
-(id)_addressFieldsToContactFields:(unsigned long long)arg1 ;
-(unsigned long long)_contactFieldsToAddressFields:(id)arg1 ;
-(void)setAccesssControlRef:(SecAccessControlRef)arg1 ;
-(void)setCTDataConnectionServiceType:(NSString *)arg1 ;
-(BOOL)suppressTotal;
-(BOOL)isPaymentSummaryPinned;
-(void)setPaymentSummaryPinned:(BOOL)arg1 ;
-(NSString *)localizedSummaryItemsTitle;
-(void)setLocalizedSummaryItemsTitle:(NSString *)arg1 ;
-(SecAccessControlRef)accesssControlRef;
-(void)setAppleIDAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(NSString *)localizedNavigationTitle;
-(unsigned long long)confirmationStyle;
-(NSString *)localizedConfirmationTitle;
-(void)setLocalizedConfirmationTitle:(NSString *)arg1 ;
-(NSString *)localizedBiometricConfirmationTitle;
-(void)setLocalizedBiometricConfirmationTitle:(NSString *)arg1 ;
-(NSString *)localizedPasswordButtonTitle;
-(void)setLocalizedPasswordButtonTitle:(NSString *)arg1 ;
-(NSString *)localizedAuthorizingTitle;
-(NSString *)localizedErrorMessage;
-(NSString *)localizedCallbackErrorTitle;
-(NSString *)localizedCallbackErrorMessage;
-(void)setRequiresAddressPrecision:(BOOL)arg1 ;
-(void)setPassSerialNumber:(NSString *)arg1 ;
@end

