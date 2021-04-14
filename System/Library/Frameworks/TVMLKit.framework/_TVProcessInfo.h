/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVProcessInfo : NSObject {

	BOOL _hasPrivateEntitlement;
	BOOL _hasiTunesAPIEntitlement;
	BOOL _hasiTunesStoreEntitlement;
	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;                        //@synthesize currentTask=_currentTask - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateEntitlement;                  //@synthesize hasPrivateEntitlement=_hasPrivateEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasiTunesAPIEntitlement;                //@synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasiTunesStoreEntitlement;              //@synthesize hasiTunesStoreEntitlement=_hasiTunesStoreEntitlement - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)dealloc;
-(id)valueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
-(BOOL)hasPrivateEntitlement;
-(BOOL)hasiTunesAPIEntitlement;
-(BOOL)hasiTunesStoreEntitlement;
@end

