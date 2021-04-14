/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray, NSData;

@interface SSVGratisRequestBody : NSObject <NSCopying> {

	NSNumber* _accountID;
	NSMutableDictionary* _additionalParameters;
	NSArray* _applications;
	BOOL _backgroundRequest;
	NSArray* _bundleIdentifiers;
	NSArray* _itemIdentifiers;
	long long _style;

}

@property (nonatomic,readonly) long long requestStyle;                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                           //@synthesize applications=_applications - In the implementation block
@property (assign,getter=isBackgroundRequest,nonatomic) BOOL backgroundRequest;              //@synthesize backgroundRequest=_backgroundRequest - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                        //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bodyDictionary; 
@property (nonatomic,readonly) NSData * JSONBodyData; 
@property (nonatomic,readonly) NSData * propertyListBodyData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(long long)requestStyle;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(NSMutableDictionary *)bodyDictionary;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id)initWithRequestStyle:(long long)arg1 ;
-(NSData *)JSONBodyData;
-(NSData *)propertyListBodyData;
-(void)setValue:(id)arg1 forBodyParameter:(id)arg2 ;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
@end

