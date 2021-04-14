/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLKeyRetrievalMethod : SAMLBaseElement

@property (nonatomic,readonly) NSString * uri; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSArray * transforms; 
+(id)createElement:(id*)arg1 ;
-(NSString *)type;
-(NSArray *)transforms;
-(NSString *)uri;
@end

