/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionSequence : SCNAction {

	SCNCActionSequence* _mycaction;
	NSArray* _actions;

}
+(BOOL)supportsSecureCoding;
+(id)sequenceWithActions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCustom;
-(id)reversedAction;
@end

