/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {

	long long _type;
	NSString* _stringValue;
	NSURL* _contactIdentifier;
	NSString* _contactInternalGUID;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(long long)type;
-(id)contactIdentifier;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)initWithStringValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 contactIdentifier:(id)arg3 contactInternalGUID:(id)arg4 ;
-(id)contactInternalGUID;
-(id)_aceContextObjectValue;
@end

