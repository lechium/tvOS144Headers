/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMBQueryableModelFieldCoder;
@class NSString;

@interface HMBModelQueryArgument : HMFObject {

	NSString* _propertyName;
	id<HMBQueryableModelFieldCoder> _defaultValue;

}

@property (nonatomic,readonly) NSString * propertyName;                                   //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) id<HMBQueryableModelFieldCoder> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)argumentWithPropertyName:(id)arg1 ;
+(id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2 ;
-(id<HMBQueryableModelFieldCoder>)defaultValue;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2 ;
@end
