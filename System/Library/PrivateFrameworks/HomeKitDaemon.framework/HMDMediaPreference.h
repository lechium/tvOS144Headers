/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMFSystemPreference, HMFPreference, NSString, NSArray;

@interface HMDMediaPreference : HMFPreference <HMFObject> {

	HMFSystemPreference* _homeKitPreference;

}

@property (copy,readonly) HMFPreference * appleMediaPreference; 
@property (copy,readonly) HMFPreference * airPlay2Preference; 
@property (readonly) HMFSystemPreference * homeKitPreference;                     //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(BOOL)boolValue;
-(id)stringValue;
-(NSString *)propertyDescription;
-(id)numberValue;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(HMFSystemPreference *)homeKitPreference;
-(HMFPreference *)appleMediaPreference;
-(HMFPreference *)airPlay2Preference;
@end

