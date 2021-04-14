/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSArray;

@interface SSDownloadPolicy : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	long long _bagType;
	NSString* _downloadKind;
	NSMutableArray* _policyRules;

}

@property (nonatomic,readonly) NSString * downloadKind;              //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,readonly) long long URLBagType;                 //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,copy) NSArray * policyRules;                    //@synthesize policyRules=_policyRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)policyRules;
-(id)initWithNetworkConstraints:(id)arg1 ;
-(long long)URLBagType;
-(NSString *)downloadKind;
-(void)unionPolicyRule:(id)arg1 ;
-(void)unionNetworkConstraints:(id)arg1 ;
-(id)_policyRuleForSizeLimit:(long long)arg1 ;
-(id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2 ;
-(void)setPolicyRule:(id)arg1 ;
-(void)setPolicyRules:(NSArray *)arg1 ;
@end
