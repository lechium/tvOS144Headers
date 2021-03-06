/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>

@class JSManagedValue;

@interface IKJSWeakMap : IKJSObject {

	JSManagedValue* _managedWeakMap;

}

@property (nonatomic,readonly) JSManagedValue * managedWeakMap;              //@synthesize managedWeakMap=_managedWeakMap - In the implementation block
-(id)initWithAppContext:(id)arg1 ;
-(id)_jsWeakMap;
-(JSManagedValue *)managedWeakMap;
-(void)setValue:(id)arg1 forWeakKey:(id)arg2 ;
-(id)valueForWeakKey:(id)arg1 ;
-(const OpaqueJSValueRef)valueRefForWeakKeyRef:(OpaqueJSValueRef)arg1 ;
@end

