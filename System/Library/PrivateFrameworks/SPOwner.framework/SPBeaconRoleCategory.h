/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SPBeaconRoleCategory : NSObject <NSCopying, NSSecureCoding> {

	long long _categoryId;
	NSString* _category;
	NSArray* _roles;

}

@property (assign,nonatomic) long long categoryId;              //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,copy) NSString * category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSArray * roles;                     //@synthesize roles=_roles - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSArray *)roles;
-(void)setRoles:(NSArray *)arg1 ;
-(void)setCategoryId:(long long)arg1 ;
-(long long)categoryId;
-(id)initWithCategoryId:(long long)arg1 category:(id)arg2 roles:(id)arg3 ;
@end

