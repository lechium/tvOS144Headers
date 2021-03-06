/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>

@protocol _UISEGestureFeatureSettings;
@class NSMutableDictionary, NSDictionary, NSString;

@interface _UISEMuxGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {

	id<_UISEGestureFeatureSettings> _settings;
	/*^block*/id _createFeatureBlock;
	NSMutableDictionary* _subfeatures;
	unsigned long long _fails;
	unsigned long long _recognizes;

}

@property (nonatomic,readonly) NSDictionary * subfeatures;              //@synthesize subfeatures=_subfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDictionary;
-(NSDictionary *)subfeatures;
-(void)featureDidChangeState:(id)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(id)initWithSettings:(id)arg1 createFeatureBlock:(/*^block*/id)arg2 ;
@end

