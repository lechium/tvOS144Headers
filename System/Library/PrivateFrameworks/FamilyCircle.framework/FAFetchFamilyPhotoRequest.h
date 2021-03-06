/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {

	BOOL _localFallback;
	BOOL _useMonogramAsLastResort;
	NSNumber* _memberDSID;
	NSString* _memberHashedDSID;
	unsigned long long _requestedSize;
	double _requiredWidth;
	double _requiredHeight;
	double _monogramDiameter;
	long long _backgroundType;
	NSString* _fullname;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (copy,readonly) NSNumber * memberDSID;                    //@synthesize memberDSID=_memberDSID - In the implementation block
@property (copy,readonly) NSString * memberHashedDSID;              //@synthesize memberHashedDSID=_memberHashedDSID - In the implementation block
@property (readonly) BOOL localFallback;                            //@synthesize localFallback=_localFallback - In the implementation block
@property (readonly) unsigned long long requestedSize;              //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign) double requiredWidth;                            //@synthesize requiredWidth=_requiredWidth - In the implementation block
@property (assign) double requiredHeight;                           //@synthesize requiredHeight=_requiredHeight - In the implementation block
@property (assign) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
@property (assign) BOOL useMonogramAsLastResort;                    //@synthesize useMonogramAsLastResort=_useMonogramAsLastResort - In the implementation block
@property (assign) long long backgroundType;                        //@synthesize backgroundType=_backgroundType - In the implementation block
@property (copy) NSString * fullname;                               //@synthesize fullname=_fullname - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)init;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)requestOptions;
-(long long)backgroundType;
-(void)setBackgroundType:(long long)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)memberDSID;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4 ;
-(id)initWithConnectionProvider:(id)arg1 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4 ;
-(double)monogramDiameter;
-(NSString *)fullname;
-(BOOL)useMonogramAsLastResort;
-(NSString *)memberHashedDSID;
-(unsigned long long)requestedSize;
-(BOOL)localFallback;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(double)requiredWidth;
-(void)setRequiredWidth:(double)arg1 ;
-(double)requiredHeight;
-(void)setRequiredHeight:(double)arg1 ;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setUseMonogramAsLastResort:(BOOL)arg1 ;
-(void)setFullname:(NSString *)arg1 ;
@end

