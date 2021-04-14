/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _components;

}

@property (nonatomic,retain,readonly) NSArray * components; 
+(BOOL)supportsSecureCoding;
+(id)entity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(id)componentForKey:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)removeComponentForClass:(Class)arg1 ;
-(id)componentForClass:(Class)arg1 ;
@end
