/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class Protocol, NSString;

@interface _WKRemoteObjectInterface : NSObject {

	RetainPtr<NSString>* _identifier;
	HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >* _methods;
	Protocol* _protocol;

}

@property (nonatomic,readonly) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)remoteObjectInterfaceWithProtocol:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(Protocol *)protocol;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(const Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1 ;
-(const Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForSelector:(SEL)arg1 ;
-(id)initWithProtocol:(id)arg1 identifier:(id)arg2 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ;
@end

