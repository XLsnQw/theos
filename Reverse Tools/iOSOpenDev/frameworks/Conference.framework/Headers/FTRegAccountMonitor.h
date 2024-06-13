/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/Conference-Structs.h>
#import <Conference/XXUnknownSuperclass.h>

@class NSArray, FTRegConnectionHandler, IMServiceImpl;

@interface FTRegAccountMonitor : XXUnknownSuperclass {
@private
	int _serviceType;	// 4 = 0x4
	IMServiceImpl *_service;	// 8 = 0x8
	NSArray *_accounts;	// 12 = 0xc
	FTRegConnectionHandler *_connectionHandler;	// 16 = 0x10
	XXStruct_xv3RjA _monitorFlags;	// 20 = 0x14
}
@property(retain, nonatomic) IMServiceImpl *service;	// G=0x481c5; S=0x48279; @synthesize=_service
@property(assign, nonatomic) int serviceType;	// G=0x481a5; S=0x481b5; @synthesize=_serviceType
@property(readonly, retain, nonatomic) NSArray *activeAccounts;	// G=0x48195; @synthesize=_accounts
- (id)initWithServiceType:(int)serviceType;	// 0x48b7d
- (void)dealloc;	// 0x481d5
- (id)logName;	// 0x48b29
- (id)_activeAccounts;	// 0x48a6d
- (void)_updateAccountState:(BOOL)state;	// 0x487c5
- (BOOL)_shouldHandleAccountNofication:(id)nofication;	// 0x48741
- (void)_startListeningForNotifications;	// 0x48531
- (void)_stopListeningForNotifications;	// 0x48369
- (void)_handleAccountNotification:(id)notification;	// 0x482e9
- (void)_handleDaemonConnected:(id)connected;	// 0x482a1
// declared property getter: - (id)activeAccounts;	// 0x48195
// declared property getter: - (int)serviceType;	// 0x481a5
// declared property setter: - (void)setServiceType:(int)type;	// 0x481b5
// declared property getter: - (id)service;	// 0x481c5
// declared property setter: - (void)setService:(id)service;	// 0x48279
@end