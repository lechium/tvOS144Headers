/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface ATVAutounbinder : NSObject {

	NSMapTable* _bindingsByObject;
	BOOL _assertOnRetainEnabled;

}
-(id)retain;
-(id)init;
-(void)dealloc;
-(void)_assertIllegalRetain;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)_notifyBindingAdaptors;
-(void)_enableAssertOnRetain;
@end

