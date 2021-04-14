/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	long long _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) long long URLBagType;                                       //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) long long accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) long long availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) long long enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) BOOL managedStudent; 
@property (getter=isNewCustomer,readonly) BOOL newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) long long responseType; 
@property (readonly) NSString * userMessage; 
-(NSString *)token;
-(id)altDSID;
-(NSString *)accountName;
-(NSString *)userMessage;
-(long long)responseType;
-(NSDictionary *)responseDictionary;
-(NSHTTPURLResponse *)URLResponse;
-(BOOL)isNewCustomer;
-(NSString *)storeFrontIdentifier;
-(long long)enabledServiceTypes;
-(NSString *)creditsString;
-(long long)accountKind;
-(long long)availableServiceTypes;
-(long long)URLBagType;
-(void)setURLBagType:(long long)arg1 ;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(id)newAccount;
-(NSNumber *)failureType;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(NSNumber *)accountUniqueIdentifier;
-(BOOL)isManagedStudent;
-(long long)_responseTypeForFailureType:(long long)arg1 ;
-(long long)_responseTypeForErrorNumber:(long long)arg1 ;
-(long long)_responseTypeForStatusValue:(long long)arg1 ;
@end

