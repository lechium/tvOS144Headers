/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLNameId;

@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,retain) NSString * sessionIndex; 
+(id)createElement:(id*)arg1 ;
-(NSString *)reason;
-(NSString *)identifier;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)issuer;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)sessionIndex;
-(void)setSessionIndex:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(SAMLNameId *)nameId;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

