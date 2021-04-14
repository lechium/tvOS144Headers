/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMCore/FMOwnerAccountIdentity.h>

@class NSString;

@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity> {

	NSString* _personId;
	NSString* _username;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * personId;               //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
-(id)description;
-(NSString *)username;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setUsername:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
@end

