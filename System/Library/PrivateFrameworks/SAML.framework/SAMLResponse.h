/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/XMLWrapperDoc.h>

@class SAMLResponseElement, NSDictionary, NSString;

@interface SAMLResponse : XMLWrapperDoc {

	SAMLResponseElement* _responseElement;

}

@property (nonatomic,retain) SAMLResponseElement * responseElement;              //@synthesize responseElement=_responseElement - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSString * selectedProvider; 
-(id)statusCodes;
-(NSDictionary *)attributes;
-(id)userName;
-(id)assertions;
-(id)subject;
-(BOOL)isValid:(id*)arg1 ;
-(id)authenticationTTL;
-(BOOL)hasValidAuthentication;
-(void)setAuthenticationTTL:(id)arg1 ;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLResponseElement *)responseElement;
-(id)attributeValuesForName:(id)arg1 ;
-(id)primaryStatusCode;
-(NSString *)selectedProvider;
-(id)authenticationSessionId;
-(long long)expectedAction;
-(id)authorizationStatusForResource:(id)arg1 ;
-(void)setResponseElement:(SAMLResponseElement *)arg1 ;
@end

